int __fastcall sub_26C858(int a1, int a2)
{
  return (sub_26CA90(abs32(a1), abs32(a2)) ^ ((a1 ^ a2) >> 31)) - ((a1 ^ a2) >> 31);
}
