int __fastcall sub_1153D0(int a1, int a2)
{
  int v4; // r0
  int *v5; // r4
  int v6; // r5
  int (__fastcall *v7)(int, int); // r3
  int v8; // t1
  int result; // r0
  int v10; // r1

  v4 = sub_1151B8(a1);
  if ( v4 == 259 )
    return sub_115340(a1);
  v5 = (int *)&off_30CF20;
  v6 = v4;
  do
  {
    v8 = *v5++;
    v7 = (int (__fastcall *)(int, int))v8;
    result = v6;
    if ( v8 )
    {
      v10 = a2;
      if ( a2 )
        v10 = 1;
      result = v7(v6, v10);
    }
  }
  while ( v5 != &dword_30CF34 );
  return result;
}
