int __fastcall sub_917D0(int a1, const void *a2, char *s)
{
  int v5; // r0

  snprintf(s, 0xBu, "%p", a2);
  if ( hashtable_get(a1, s) )
    return -1;
  v5 = json_null();
  return hashtable_set(a1, s, v5);
}
