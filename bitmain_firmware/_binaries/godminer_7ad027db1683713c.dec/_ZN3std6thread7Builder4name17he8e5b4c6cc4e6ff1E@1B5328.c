int __fastcall std::thread::Builder::name(int *a1, int *a2, int *a3)
{
  void *v4; // r0
  int *v5; // r7
  bool v7; // zf
  int v9; // r1
  int v10; // r2
  int result; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r7

  v4 = (void *)a2[3];
  v5 = a2 + 2;
  v7 = v4 == 0;
  if ( v4 )
    v7 = *v5 == 0;
  if ( !v7 )
    _rust_dealloc(v4);
  v9 = a3[1];
  v10 = a3[2];
  *v5 = *a3;
  v5[1] = v9;
  v5[2] = v10;
  result = *a2;
  v12 = a2[1];
  v13 = a2[2];
  v14 = a2[3];
  v15 = a2[4];
  *a1 = *a2;
  a1[1] = v12;
  a1[2] = v13;
  a1[3] = v14;
  a1[4] = v15;
  return result;
}
