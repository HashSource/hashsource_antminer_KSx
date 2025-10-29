int __fastcall <adler::Adler32 as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 2;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)"Adler32ab_URC_FAILURE_URC_CONTINUE_UNWIND_URC_INSTALL_CONTEXT_URC_HANDLER_FOUND_URC_END_OF_STACK_URC_NOR"
                "MAL_STOP_URC_FATAL_PHASE1_ERROR_URC_FATAL_PHASE2_ERROR_URC_FOREIGN_EXCEPTION_CAUGHT_URC_NO_REASON",
           7,
           (int)"ab_URC_FAILURE_URC_CONTINUE_UNWIND_URC_INSTALL_CONTEXT_URC_HANDLER_FOUND_URC_END_OF_STACK_URC_NORMAL_STO"
                "P_URC_FATAL_PHASE1_ERROR_URC_FATAL_PHASE2_ERROR_URC_FOREIGN_EXCEPTION_CAUGHT_URC_NO_REASON",
           1,
           (int)&v3,
           (int)&off_2E26C4,
           "b_URC_FAILURE_URC_CONTINUE_UNWIND_URC_INSTALL_CONTEXT_URC_HANDLER_FOUND_URC_END_OF_STACK_URC_NORMAL_STOP_URC_FATAL_PHASE1_ERROR_URC_FATAL_PHASE2_ERROR_URC_FOREIGN_EXCEPTION_CAUGHT_URC_NO_REASON",
           1,
           &v4,
           &off_2E26C4);
}
