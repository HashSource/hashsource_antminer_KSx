void *__fastcall std::alloc::set_alloc_error_hook(void *result)
{
  __dmb(0xBu);
  off_2E960C = result;
  __dmb(0xBu);
  return result;
}
