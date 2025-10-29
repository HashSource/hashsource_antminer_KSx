int *__fastcall <std::panicking::begin_panic_handler::PanicPayload as core::panic::BoxMeUp>::take_box(int *a1)
{
  int *v2; // r12
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // lr
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int *result; // r0
  int v14; // r3
  int v15; // r7
  int v16; // [sp+0h] [bp-28h] BYREF
  int v17; // [sp+4h] [bp-24h]
  int v18; // [sp+8h] [bp-20h]
  int *v19; // [sp+Ch] [bp-1Ch] BYREF
  int v20; // [sp+10h] [bp-18h] BYREF
  int v21; // [sp+14h] [bp-14h]
  int v22; // [sp+18h] [bp-10h]
  int v23; // [sp+1Ch] [bp-Ch]
  int v24; // [sp+20h] [bp-8h]
  int v25; // [sp+24h] [bp-4h]

  if ( !a1[1] )
  {
    v2 = (int *)a1[3];
    v18 = 0;
    v16 = 0;
    v17 = 1;
    v19 = &v16;
    v3 = v2[1];
    v4 = v2[2];
    v5 = v2[3];
    v6 = v2[4];
    v7 = v2[5];
    v20 = *v2;
    v21 = v3;
    v22 = v4;
    v23 = v5;
    v24 = v6;
    v25 = v7;
    core::fmt::write((int)&v19, (int)&off_2E9080, &v20);
    v8 = v17;
    v9 = v18;
    *a1 = v16;
    a1[1] = v8;
    a1[2] = v9;
  }
  v10 = *a1;
  v11 = a1[1];
  v12 = a1[2];
  *a1 = 0;
  a1[1] = 1;
  a1[2] = 0;
  v20 = v10;
  v21 = v11;
  v22 = v12;
  v16 = v10;
  v17 = v11;
  v18 = v12;
  result = (int *)_rust_alloc(0xCu);
  if ( !result )
    alloc::alloc::handle_alloc_error();
  v14 = v17;
  v15 = v18;
  *result = v16;
  result[1] = v14;
  result[2] = v15;
  return result;
}
