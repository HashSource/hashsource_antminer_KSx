int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_2D35B4 )
  {
    byte_2D35B8 = 0;
    byte_2D35B9 = 0;
    byte_2D35BA = 0;
    byte_2D35BB = 0;
    byte_2D35BC = 0;
    byte_2D35BD = 0;
    byte_2D35BF = 0;
    byte_2D35C0 = 0;
    byte_2D35B4 = 1;
    byte_2D35BE = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_2D35BC;
  v2 = byte_2D35C0;
  *(_DWORD *)result = *(_DWORD *)&byte_2D35B8;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
