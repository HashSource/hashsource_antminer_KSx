int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_2F3E74 )
  {
    byte_2F3E78 = 0;
    byte_2F3E79 = 0;
    byte_2F3E7A = 0;
    byte_2F3E7B = 0;
    byte_2F3E7C = 0;
    byte_2F3E7D = 0;
    byte_2F3E7F = 0;
    byte_2F3E80 = 0;
    byte_2F3E74 = 1;
    byte_2F3E7E = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_2F3E7C;
  v2 = byte_2F3E80;
  *(_DWORD *)result = *(_DWORD *)&byte_2F3E78;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
