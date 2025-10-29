void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, &dword_2E9A88, 0x124u);
  return result;
}
