char *__fastcall new_c_rb(int a1, int a2, int a3)
{
  char *result; // r0

  result = (char *)malloc(0x28u);
  if ( result )
  {
    *((_DWORD *)result + 9) = a1;
    *((_DWORD *)result + 7) = a2;
    *((_DWORD *)result + 8) = a3;
    *(_QWORD *)(result + 20) = 0;
    *(_DWORD *)result = result + 4;
    *((_DWORD *)result + 1) = result + 4;
    *((_DWORD *)result + 2) = result + 4;
    *((_DWORD *)result + 3) = 0;
    *((_DWORD *)result + 4) = 0;
  }
  return result;
}
