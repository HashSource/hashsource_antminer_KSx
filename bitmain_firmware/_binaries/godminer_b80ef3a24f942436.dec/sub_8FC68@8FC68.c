int __fastcall sub_8FC68(unsigned int *a1, const void *a2, char *s)
{
  int v5; // r0

  snprintf(s, 0xBu, "%p", a2);
  if ( hashtable_get((int)a1, s) )
    return -1;
  v5 = json_null();
  return hashtable_set(a1, s, v5);
}
