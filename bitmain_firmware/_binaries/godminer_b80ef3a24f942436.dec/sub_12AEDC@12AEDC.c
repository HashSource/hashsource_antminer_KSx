ssize_t sub_12AEDC()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 49;
  result = write(dword_2F187C, &v1, 1u);
  if ( result != 1 )
    return sub_12AE44();
  return result;
}
