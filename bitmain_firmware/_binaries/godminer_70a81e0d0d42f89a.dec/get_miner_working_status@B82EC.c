int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  int v2; // r2
  char v3; // r3

  if ( !byte_2EB95C )
  {
    byte_2EB960 = 0;
    byte_2EB961 = 0;
    byte_2EB962 = 0;
    byte_2EB963 = 0;
    byte_2EB964 = 0;
    byte_2EB965 = 0;
    byte_2EB967 = 0;
    byte_2EB968 = 0;
    byte_2EB95C = 1;
    byte_2EB966 = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_2EB964;
  v2 = *(_DWORD *)&byte_2EB968;
  v3 = byte_2EB96C;
  *(_DWORD *)result = *(_DWORD *)&byte_2EB960;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 12) = v3;
  *(_DWORD *)(result + 8) = v2;
  return result;
}
