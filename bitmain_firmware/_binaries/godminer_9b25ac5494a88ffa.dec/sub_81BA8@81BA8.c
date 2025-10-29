int __fastcall sub_81BA8(int a1, const char **a2)
{
  int all_created_runtime; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r2
  int v8; // r0
  __int64 v9; // r0
  int v10; // r5
  int v12; // [sp+4h] [bp-8h] BYREF

  v12 = 0;
  frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v12);
  if ( !a2 )
    return sub_81B20(all_created_runtime);
  sub_7E868(a1, a2, v5);
  v8 = sub_7E970(a1, v6, v7);
  v9 = json_array(v8);
  v10 = v9;
  sweep_get_error_code(v9, HIDWORD(v9));
  json_object_set_new(a1, "WARNING", v10);
  return 0;
}
