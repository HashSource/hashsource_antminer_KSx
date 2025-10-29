int __fastcall sub_81AF8(_DWORD *a1, const char **a2)
{
  void *all_created_runtime; // r0
  _DWORD *v5; // r5
  int v7; // [sp+4h] [bp-8h] BYREF

  v7 = 0;
  frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v7);
  if ( !a2 )
    return sub_81A70((int)all_created_runtime);
  sub_7E7B8((int)a1, a2);
  sub_7E8C0((int)a1);
  v5 = json_array();
  sweep_get_error_code();
  json_object_set_new(a1, "WARNING", v5);
  return 0;
}
