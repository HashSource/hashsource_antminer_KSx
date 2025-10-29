int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  int v2; // r2
  char v3; // r3

  if ( !byte_2EA654 )
  {
    byte_2EA658 = 0;
    byte_2EA659 = 0;
    byte_2EA65A = 0;
    byte_2EA65B = 0;
    byte_2EA65C = 0;
    byte_2EA65D = 0;
    byte_2EA65F = 0;
    byte_2EA660 = 0;
    byte_2EA654 = 1;
    byte_2EA65E = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_2EA65C;
  v2 = *(_DWORD *)&byte_2EA660;
  v3 = byte_2EA664;
  *(_DWORD *)result = *(_DWORD *)&byte_2EA658;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 12) = v3;
  *(_DWORD *)(result + 8) = v2;
  return result;
}
