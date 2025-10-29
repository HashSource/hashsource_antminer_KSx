int diag_LogFileClose()
{
  int result; // r0

  result = dword_311FF0;
  if ( dword_311FF0 )
  {
    result = delete_c_map((void (__fastcall ***)(_DWORD))dword_311FF0);
    dword_311FF0 = 0;
  }
  return result;
}
