int __fastcall <u16 as keccak::LaneSize>::rotate_left(int a1, char a2)
{
  return (a1 << (a2 & 0xF)) | ((unsigned __int16)a1 >> (-a2 & 0xF));
}
