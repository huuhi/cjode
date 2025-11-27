/**
 * @file string_demo.c
 * @brief
 * @author
 * @date 2025/11/27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[])
{
  /* 使用宽字符和本地化设置以在 Windows 控制台正确处理中文 */
  setlocale(LC_ALL, "");

  /* 将标准输入/输出切换到 UTF-16 模式（Windows 专用）以便 wprintf / fgetws 能正确工作 */
#ifdef _WIN32
  _setmode(_fileno(stdout), _O_U16TEXT);
  _setmode(_fileno(stdin), _O_U16TEXT);
#endif

  int count;
  wchar_t name[64];

  wprintf(L"请输入要群发的人数:");
  if (fwscanf(stdin, L"%d", &count) != 1)
    return 0;

  /* 读取并丢弃换行符，避免后续 fgetws 读取到空行 */
  wint_t c = fgetwc(stdin);
  (void)c;

  for (int i = 0; i < count; i++)
  {
    wprintf(L"请输入你要打招呼的人的姓名:");
    if (fgetws(name, (int)sizeof(name) / sizeof(wchar_t), stdin) == NULL)
    {
      name[0] = L'\0';
    }
    else
    {
      /* 去掉末尾换行符 */
      size_t len = wcslen(name);
      if (len > 0 && name[len - 1] == L'\n')
        name[len - 1] = L'\0';
    }

    wprintf(L"你好！%ls\n", name);
  }

  wprintf(L"你已经打完招呼了！\n");
  return 0;
}