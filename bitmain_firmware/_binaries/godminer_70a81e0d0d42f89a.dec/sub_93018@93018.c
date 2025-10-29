int __fastcall sub_93018(int a1)
{
  int v1; // r4
  int v2; // r1
  int v3; // r3
  int v4; // t1
  int v5; // r12
  unsigned int v6; // lr
  int v7; // r1
  unsigned int v8; // r2
  int v9; // r3

  v1 = a1 + 4;
  v2 = 0;
  while ( 1 )
  {
    v4 = *(unsigned __int8 *)++a1;
    v3 = v4;
    v5 = 16 * v2;
    v6 = v4 - 97;
    v2 = v4 - 48 + 16 * v2;
    if ( (unsigned __int8)(v4 - 48) > 9u )
      break;
LABEL_6:
    if ( a1 == v1 )
      return v2;
  }
  v7 = v3 - 55;
  v8 = v3 - 65;
  v9 = v3 - 87;
  v2 = v7 + v5;
  if ( v6 <= 0x19 )
  {
    v2 = v9 + v5;
    goto LABEL_6;
  }
  if ( v8 <= 0x19 )
    goto LABEL_6;
  return -1;
}
