int __fastcall <u8 as keccak::LaneSize>::rotate_left(int a1, char a2)
{
  return (a1 << (a2 & 7)) | ((unsigned __int8)a1 >> (-a2 & 7));
}
