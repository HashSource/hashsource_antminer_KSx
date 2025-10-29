ssize_t sub_1271C8()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 49;
  result = write(dword_2E7C90, &v1, 1u);
  if ( result != 1 )
    return sub_127130();
  return result;
}
