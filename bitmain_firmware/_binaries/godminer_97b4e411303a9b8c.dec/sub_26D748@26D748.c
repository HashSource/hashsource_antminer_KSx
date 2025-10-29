int __fastcall sub_26D748(int a1, int a2)
{
  return (sub_26D980(abs32(a1), abs32(a2)) ^ ((a1 ^ a2) >> 31)) - ((a1 ^ a2) >> 31);
}
