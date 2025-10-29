void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, &dword_30C630, 0x124u);
  return result;
}
