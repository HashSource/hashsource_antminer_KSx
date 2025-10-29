int __fastcall <std::io::stdio::StdinLock as std::io::BufRead>::consume(int *a1, int a2)
{
  int result; // r0
  unsigned int v3; // r3
  unsigned int v4; // r1

  result = *a1;
  v3 = *(_DWORD *)(result + 20);
  v4 = *(_DWORD *)(result + 16) + a2;
  if ( v4 < v3 )
    v3 = v4;
  *(_DWORD *)(result + 16) = v3;
  return result;
}
