int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  int v2; // r2
  char v3; // r3

  if ( !byte_2E8638 )
  {
    byte_2E863C = 0;
    byte_2E863D = 0;
    byte_2E863E = 0;
    byte_2E863F = 0;
    byte_2E8640 = 0;
    byte_2E8641 = 0;
    byte_2E8643 = 0;
    byte_2E8644 = 0;
    byte_2E8638 = 1;
    byte_2E8642 = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_2E8640;
  v2 = *(_DWORD *)&byte_2E8644;
  v3 = byte_2E8648;
  *(_DWORD *)result = *(_DWORD *)&byte_2E863C;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 12) = v3;
  *(_DWORD *)(result + 8) = v2;
  return result;
}
