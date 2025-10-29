int __fastcall sub_25BAE0(int a1, int a2)
{
  return (sub_25BD18(abs32(a1), abs32(a2)) ^ ((a1 ^ a2) >> 31)) - ((a1 ^ a2) >> 31);
}
