unsigned int __fastcall sub_25A970(int a1, int a2)
{
  return (sub_25ABA8(abs32(a1), abs32(a2)) ^ ((a1 ^ a2) >> 31)) - ((a1 ^ a2) >> 31);
}
