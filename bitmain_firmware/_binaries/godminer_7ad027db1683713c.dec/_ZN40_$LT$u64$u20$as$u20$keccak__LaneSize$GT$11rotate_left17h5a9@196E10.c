unsigned int __fastcall <u64 as keccak::LaneSize>::rotate_left(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v3; // r3

  v3 = a1;
  if ( (a3 & 0x20) != 0 )
  {
    v3 = a2;
    a2 = a1;
  }
  return (v3 << (a3 & 0x1F)) | (a2 >> 1 >> (~a3 & 0x1F));
}
