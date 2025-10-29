int __fastcall std::path::Component::as_os_str(int a1)
{
  _R1 = *(char *)(a1 + 8);
  _R3 = 5;
  __asm { UQSUB8          R1, R1, R3 }
  return ((int (__fastcall *)(const char *))((char *)dword_1E176C + dword_1E176C[(unsigned __int8)_R1]))(asc_2A7687);
}
