int __fastcall subject_notify_all(int result, int a2)
{
  int v2; // r5
  int v4; // r6
  int v5; // r4
  int (__fastcall *v6)(int); // t1

  if ( *(int *)(result + 1024) > 0 )
  {
    v2 = result - 4;
    v4 = result;
    v5 = 0;
    do
    {
      v6 = *(int (__fastcall **)(int))(v2 + 4);
      v2 += 4;
      result = v6(a2);
      ++v5;
    }
    while ( *(_DWORD *)(v4 + 1024) > v5 );
  }
  return result;
}
