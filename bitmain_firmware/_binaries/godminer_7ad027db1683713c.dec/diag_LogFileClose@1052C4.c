int diag_LogFileClose()
{
  int result; // r0

  result = dword_2E874C;
  if ( dword_2E874C )
  {
    result = delete_c_map((void (__fastcall ***)(_DWORD))dword_2E874C);
    dword_2E874C = 0;
  }
  return result;
}
