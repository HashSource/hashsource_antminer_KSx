source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%sockaddr = type { i32, [14 x i8] }
%stat64 = type { i64, i64, i32, i32, i32, i32, i64, i64, i64, i32, i32, i64, i32, i32, i32, i32, i32, i32, i32, i32 }

@global_var_2200c = local_unnamed_addr global i32 67500
@global_var_22010 = local_unnamed_addr global i32 67500
@global_var_22014 = local_unnamed_addr global i32 67500
@global_var_22018 = local_unnamed_addr global i32 67500
@global_var_2201c = local_unnamed_addr global i32 67500
@global_var_22020 = local_unnamed_addr global i32 67500
@global_var_22024 = local_unnamed_addr global i32 67500
@global_var_22028 = local_unnamed_addr global i32 67500
@global_var_2202c = local_unnamed_addr global i32 67500
@global_var_22030 = local_unnamed_addr global i32 67500
@global_var_22034 = local_unnamed_addr global i32 67500
@global_var_22038 = local_unnamed_addr global i32 67500
@global_var_2203c = local_unnamed_addr global i32 67500
@global_var_22040 = local_unnamed_addr global i32 67500
@global_var_22044 = local_unnamed_addr global i32 67500
@global_var_22048 = local_unnamed_addr global i32 67500
@global_var_2204c = local_unnamed_addr global i32 67500
@global_var_22050 = local_unnamed_addr global i32 67500
@global_var_22054 = local_unnamed_addr global i32 67500
@global_var_22058 = local_unnamed_addr global i32 67500
@global_var_2205c = local_unnamed_addr global i32 67500
@global_var_22060 = local_unnamed_addr global i32 67500
@global_var_22064 = local_unnamed_addr global i32 67500
@global_var_22068 = local_unnamed_addr global i32 67500
@global_var_2206c = local_unnamed_addr global i32 67500
@global_var_22070 = local_unnamed_addr global i32 67500
@global_var_22074 = local_unnamed_addr global i32 67500
@global_var_22078 = local_unnamed_addr global i32 67500
@global_var_2207c = local_unnamed_addr global i32 67500
@global_var_22080 = local_unnamed_addr global i32 67500
@global_var_22084 = local_unnamed_addr global i32 67500
@global_var_11550 = constant [8 x i8] c"daemonc\00"
@global_var_11558 = constant [8 x i8] c"daemons\00"
@global_var_11520 = constant [10 x i8] c"127.0.0.1\00"
@global_var_1152c = constant [6 x i8] c"22322\00"
@global_var_11584 = constant [29 x i8] c"Will Listening To Port[%d]\0D\0A\00"
@global_var_115c4 = constant [30 x i8] c"waiting for new connection...\00"
@global_var_115f4 = constant [25 x i8] c"A new connection occurs!\00"
@global_var_11610 = constant [23 x i8] c"pthread_create error!\0A\00"
@global_var_11634 = constant [18 x i8] c"Server shuts down\00"
@global_var_115e4 = constant [15 x i8] c"Accept error!\0A\00"
@global_var_11648 = constant [22 x i8] c"Cannot Find Command!\0D\00"
@global_var_11560 = constant [16 x i8] c"update-daemon.c\00"
@global_var_11628 = constant [10 x i8] c"ret != -1\00"
@global_var_10b84 = local_unnamed_addr constant i32 70700
@global_var_1142c = constant [14 x i8] c"ProcessServer\00"
@global_var_11570 = constant [20 x i8] c"sockfd_server != -1\00"
@global_var_115b4 = constant [15 x i8] c"listen error!\0A\00"
@global_var_115a4 = constant [13 x i8] c"bind error!\0A\00"
@global_var_10bd4 = local_unnamed_addr constant i32 70712
@global_var_11438 = constant i32 114
@global_var_10bd8 = local_unnamed_addr constant i32 136
@global_var_10bc8 = constant i32 -481165312
@global_var_1143c = constant [13 x i8] c"New Thread!\0D\00"
@global_var_1144c = constant [12 x i8] c"Recv:'%s'\0D\0A\00"
@global_var_11474 = constant [24 x i8] c"Invalid client content.\00"
@global_var_1102c = local_unnamed_addr constant [25 x i8] c"/usr/sbin/updateporc.sh \00"
@global_var_11030 = local_unnamed_addr constant [21 x i8] c"/sbin/updateporc.sh \00"
@global_var_11034 = local_unnamed_addr constant [17 x i8] c"n/updateporc.sh \00"
@global_var_11038 = local_unnamed_addr constant [13 x i8] c"dateporc.sh \00"
@global_var_1103c = local_unnamed_addr constant [9 x i8] c"porc.sh \00"
@global_var_11040 = local_unnamed_addr constant [5 x i8] c".sh \00"
@global_var_11510 = local_unnamed_addr constant [14 x i8] c"Come On WUHAN\00"
@global_var_11514 = local_unnamed_addr constant [10 x i8] c" On WUHAN\00"
@global_var_11518 = local_unnamed_addr constant [6 x i8] c"WUHAN\00"
@global_var_1149c = constant [21 x i8] c"system status:[%d]\0D\0A\00"
@global_var_114b4 = constant [26 x i8] c"Shell Exec Successfully!\0D\00"
@global_var_11458 = constant [25 x i8] c"File does not exist: %s\0A\00"
@global_var_114f4 = constant [21 x i8] c"Other Exit Ret[%d]\0D\0A\00"
@global_var_1150c = constant [4 x i8] c"6%d\00"
@global_var_1148c = constant [13 x i8] c"system err!\0D\00"
@global_var_114d0 = constant [32 x i8] c"Shell Execute Failed, Ret[%d]\0D\0A\00"
@global_var_114f0 = constant [3 x i8] c"%d\00"
@global_var_11534 = constant [12 x i8] c"socket err:\00"
@global_var_11540 = constant [13 x i8] c"connect err:\00"
@global_var_11014 = local_unnamed_addr constant i32 69402
@global_var_11018 = local_unnamed_addr constant i32 69392
@global_var_21f08 = global i32 68677
@0 = external global i32
@global_var_22098 = local_unnamed_addr global %_IO_FILE* null
@global_var_10bb0 = local_unnamed_addr constant void ()* inttoptr (i32 67892 to void ()*)
@global_var_10bb4 = local_unnamed_addr constant void ()* inttoptr (i32 69601 to void ()*)
@global_var_11044 = local_unnamed_addr constant i8 0
@global_var_1151c = local_unnamed_addr constant i16 78

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_107a0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_107a0:
  %0 = call i32 @function_10bb8(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i8* @function_107c0(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_107c0:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !2
  ret i8* %0, !insn.addr !2
}

define i32 @function_107cc(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107cc:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107d8(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_107d8:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_107e4(i8* %s) local_unnamed_addr {
dec_label_pc_107e4:
  call void @perror(i8* %s), !insn.addr !5
  ret void, !insn.addr !5
}

define i32 @function_107f0(i32 %fd, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_107f0:
  %0 = call i32 @accept(i32 %fd, %sockaddr* %addr, i32* %addr_len), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_107fc(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_107fc:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i8* @function_10808(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10808:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_10814(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_10814:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10820(i8* %s) local_unnamed_addr {
dec_label_pc_10820:
  %0 = call i32 @puts(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_1082c(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1082c:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10838(i8* %command) local_unnamed_addr {
dec_label_pc_10838:
  %0 = call i32 @system(i8* %command), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_10844() local_unnamed_addr {
dec_label_pc_10844:
  call void @__gmon_start__(), !insn.addr !13
  ret void, !insn.addr !13
}

define i16** @function_10850() local_unnamed_addr {
dec_label_pc_10850:
  %0 = call i16** @__ctype_b_loc(), !insn.addr !14
  ret i16** %0, !insn.addr !14
}

define void @function_1085c(i32 %status) local_unnamed_addr {
dec_label_pc_1085c:
  call void @exit(i32 %status), !insn.addr !15
  ret void, !insn.addr !15
}

define i32 @function_10868(i8* %s) local_unnamed_addr {
dec_label_pc_10868:
  %0 = call i32 @strlen(i8* %s), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_10874(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10874:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32* @function_10880(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10880:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !18
  ret i32* %0, !insn.addr !18
}

define i32 @function_1088c(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_1088c:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define void @function_10898(i32* %retval) local_unnamed_addr {
dec_label_pc_10898:
  call void @pthread_exit(i32* %retval), !insn.addr !20
  ret void, !insn.addr !20
}

define i32 @function_108a4(i32 %fd, i32 %how) local_unnamed_addr {
dec_label_pc_108a4:
  %0 = call i32 @shutdown(i32 %fd, i32 %how), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_108b0(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_108b0:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_108bc(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_108bc:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_108c8(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_108c8:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_108d4(i8* %cp) local_unnamed_addr {
dec_label_pc_108d4:
  %0 = call i32 @inet_addr(i8* %cp), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_108e0(i32 %ver, i8* %filename, %stat64* %stat_buf) local_unnamed_addr {
dec_label_pc_108e0:
  %0 = call i32 @__xstat64(i32 %ver, i8* %filename, %stat64* %stat_buf), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define void @function_108ec() local_unnamed_addr {
dec_label_pc_108ec:
  call void @abort(), !insn.addr !27
  ret void, !insn.addr !27
}

define i32 @function_108f8(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_108f8:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_10904(i32 %fd) local_unnamed_addr {
dec_label_pc_10904:
  %0 = call i32 @close(i32 %fd), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_10910(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_10910:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_1091c(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1091c:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define void @function_10928(i8* %assertion, i8* %file, i32 %line, i8* %function) local_unnamed_addr {
dec_label_pc_10928:
  call void @__assert_fail(i8* %assertion, i8* %file, i32 %line, i8* %function), !insn.addr !32
  ret void, !insn.addr !32
}

define i32 @function_10934(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10934:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !33
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-68 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i16, align 2
  %2 = load i32, i32* %0
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !34
  %4 = call i8* @strstr(i8* %3, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_11550, i32 0, i32 0)), !insn.addr !34
  %5 = icmp eq i8* %4, null, !insn.addr !35
  br i1 %5, label %dec_label_pc_1095c, label %dec_label_pc_10ac0, !insn.addr !36

dec_label_pc_1095c:                               ; preds = %dec_label_pc_10934
  %6 = call i8* @strstr(i8* %3, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_11558, i32 0, i32 0)), !insn.addr !37
  %7 = icmp eq i8* %6, null, !insn.addr !38
  br i1 %7, label %dec_label_pc_10ae8, label %dec_label_pc_10974, !insn.addr !39

dec_label_pc_10974:                               ; preds = %dec_label_pc_1095c
  %8 = ptrtoint i8* %4 to i32, !insn.addr !34
  %9 = call i32 @socket(i32 2, i32 1, i32 %8), !insn.addr !40
  %10 = icmp eq i32 %9, -1, !insn.addr !41
  br i1 %10, label %dec_label_pc_10b18, label %dec_label_pc_10990, !insn.addr !42

dec_label_pc_10990:                               ; preds = %dec_label_pc_10974
  %11 = call double @__asm_vmov.i32(i32 0), !insn.addr !43
  store i16 2, i16* %stack_var_-56, align 2, !insn.addr !44
  call void @__asm_vst1.8(double %11, i32 %2), !insn.addr !45
  call void @__asm_vst1.8(double %11, i32 %1), !insn.addr !46
  %12 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11520, i32 0, i32 0)), !insn.addr !47
  %13 = call i32 @function_10c48(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1152c, i32 0, i32 0)), !insn.addr !48
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11584, i32 0, i32 0), i32 %13), !insn.addr !49
  %15 = bitcast i16* %stack_var_-56 to %sockaddr*, !insn.addr !50
  %16 = call i32 @bind(i32 %9, %sockaddr* nonnull %15, i32 16), !insn.addr !50
  %17 = icmp eq i32 %16, -1, !insn.addr !51
  br i1 %17, label %dec_label_pc_10b5c, label %dec_label_pc_109f8, !insn.addr !52

dec_label_pc_109f8:                               ; preds = %dec_label_pc_10990
  %18 = call i32 @listen(i32 %9, i32 512), !insn.addr !53
  %19 = icmp eq i32 %18, -1, !insn.addr !54
  br i1 %19, label %dec_label_pc_10b34, label %dec_label_pc_10a2c.preheader, !insn.addr !55

dec_label_pc_10a2c.preheader:                     ; preds = %dec_label_pc_109f8
  %20 = bitcast i32* %stack_var_-40 to %sockaddr*
  br label %dec_label_pc_10a2c

dec_label_pc_10a2c:                               ; preds = %dec_label_pc_10a2c.backedge, %dec_label_pc_10a2c.preheader
  %21 = call i32 @puts(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_115c4, i32 0, i32 0)), !insn.addr !56
  store i32 16, i32* %stack_var_-64, align 4, !insn.addr !57
  %22 = call i32 @accept(i32 %9, %sockaddr* nonnull %20, i32* nonnull %stack_var_-64), !insn.addr !58
  %23 = icmp eq i32 %22, -1, !insn.addr !59
  store i32 %22, i32* %stack_var_-68, align 4, !insn.addr !60
  br i1 %23, label %dec_label_pc_10acc, label %dec_label_pc_10a58, !insn.addr !61

dec_label_pc_10a58:                               ; preds = %dec_label_pc_10a2c
  %24 = call i32 @puts(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_115f4, i32 0, i32 0)), !insn.addr !62
  %25 = call i32 @pthread_create(i32* nonnull %stack_var_-60, i32* null, i32* (i32*)* inttoptr (i32 68756 to i32* (i32*)*), i32* nonnull %stack_var_-68), !insn.addr !63
  %26 = icmp eq i32 %25, -1, !insn.addr !64
  br i1 %26, label %dec_label_pc_10a7c, label %dec_label_pc_10a2c.backedge, !insn.addr !65

dec_label_pc_10a7c:                               ; preds = %dec_label_pc_10a58
  %27 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !66
  %28 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_11610 to i32*), i32 1, i32 22, %_IO_FILE* %27), !insn.addr !67
  %29 = call i32 @shutdown(i32 %9, i32 1), !insn.addr !68
  %30 = icmp eq i32 %29, -1, !insn.addr !69
  br i1 %30, label %dec_label_pc_10afc, label %dec_label_pc_10aa8, !insn.addr !70

dec_label_pc_10aa8:                               ; preds = %dec_label_pc_10a7c
  %31 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_11634, i32 0, i32 0)), !insn.addr !71
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !72
  br label %dec_label_pc_10ab8, !insn.addr !72

dec_label_pc_10ab8:                               ; preds = %dec_label_pc_10ae8, %dec_label_pc_10ac0, %dec_label_pc_10aa8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !73

dec_label_pc_10ac0:                               ; preds = %dec_label_pc_10934
  %32 = add i32 %arg2, 4, !insn.addr !74
  %33 = inttoptr i32 %32 to i32*, !insn.addr !74
  %34 = load i32, i32* %33, align 4, !insn.addr !74
  %35 = call i32 @function_10ec4(i32 %34), !insn.addr !75
  store i32 %35, i32* %r0.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_10ab8, !insn.addr !76

dec_label_pc_10acc:                               ; preds = %dec_label_pc_10a2c
  %36 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !77
  %37 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_115e4 to i32*), i32 1, i32 14, %_IO_FILE* %36), !insn.addr !78
  br label %dec_label_pc_10a2c.backedge, !insn.addr !79

dec_label_pc_10a2c.backedge:                      ; preds = %dec_label_pc_10acc, %dec_label_pc_10a58
  br label %dec_label_pc_10a2c

dec_label_pc_10ae8:                               ; preds = %dec_label_pc_1095c
  %38 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_11648, i32 0, i32 0)), !insn.addr !80
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !81
  br label %dec_label_pc_10ab8, !insn.addr !81

dec_label_pc_10afc:                               ; preds = %dec_label_pc_10a7c
  call void @__assert_fail(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11628, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11560, i32 0, i32 0), i32 208, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_1142c, i32 0, i32 0)), !insn.addr !82
  br label %dec_label_pc_10b18, !insn.addr !82

dec_label_pc_10b18:                               ; preds = %dec_label_pc_10afc, %dec_label_pc_10974
  call void @__assert_fail(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_11570, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11560, i32 0, i32 0), i32 166, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_1142c, i32 0, i32 0)), !insn.addr !83
  br label %dec_label_pc_10b34, !insn.addr !83

dec_label_pc_10b34:                               ; preds = %dec_label_pc_10b18, %dec_label_pc_109f8
  %39 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !84
  %40 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_115b4 to i32*), i32 1, i32 14, %_IO_FILE* %39), !insn.addr !85
  call void @exit(i32 1), !insn.addr !86
  unreachable, !insn.addr !86

dec_label_pc_10b5c:                               ; preds = %dec_label_pc_10990
  %41 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !87
  %42 = call i32 @fwrite(i32* bitcast ([13 x i8]* @global_var_115a4 to i32*), i32 1, i32 12, %_IO_FILE* %41), !insn.addr !88
  call void @exit(i32 1), !insn.addr !89
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !89

; uselistorder directives
  uselistorder i32 %22, { 1, 0 }
  uselistorder double %11, { 1, 0 }
  uselistorder i8* %4, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder void (i32)* @exit, { 1, 0, 2 }
  uselistorder void (i8*, i8*, i32, i8*)* @__assert_fail, { 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 3, 2, 1, 0, 4 }
  uselistorder %_IO_FILE** @global_var_22098, { 3, 2, 1, 0 }
  uselistorder i8* (i8*, i8*)* @strstr, { 1, 0, 2 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10b88:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !90
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !90
  %2 = call i32 @__libc_start_main(i32 67892, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 69601 to void ()*), void ()* inttoptr (i32 67892 to void ()*), void ()* %1), !insn.addr !90
  call void @abort(), !insn.addr !91
  unreachable, !insn.addr !91
}

define i32 @function_10bac(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10bac:
  ret i32 %arg1, !insn.addr !92
}

define i32 @function_10bb8() local_unnamed_addr {
dec_label_pc_10bb8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10bc8 to i32), i32 ptrtoint (i32* @global_var_11438 to i32)), i32 136) to i32*), align 4, !insn.addr !93
  %3 = icmp eq i32 %2, 0, !insn.addr !94
  br i1 %3, label %4, label %dec_label_pc_10bd0, !insn.addr !95

; <label>:4:                                      ; preds = %dec_label_pc_10bb8
  ret i32 %1, !insn.addr !95

dec_label_pc_10bd0:                               ; preds = %dec_label_pc_10bb8
  call void @__gmon_start__(), !insn.addr !96
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !96
}

define i32 @function_10bdc(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_10bdc:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.01.reg2mem = alloca i1, !insn.addr !97
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_10bf8, !insn.addr !97

; <label>:9:                                      ; preds = %dec_label_pc_10bdc
  ret i32 %arg1, !insn.addr !97

dec_label_pc_10bf8:                               ; preds = %dec_label_pc_10bdc
  %10 = icmp eq i1 %5, %3, !insn.addr !98
  br i1 %10, label %dec_label_pc_10c0c, label %11, !insn.addr !98

; <label>:11:                                     ; preds = %dec_label_pc_10bf8
  call void @__asm_svclt(i32 18288), !insn.addr !98
  br label %dec_label_pc_10c0c, !insn.addr !98

dec_label_pc_10c0c:                               ; preds = %11, %dec_label_pc_10bf8
  br i1 %3, label %dec_label_pc_10c24, label %12, !insn.addr !99

; <label>:12:                                     ; preds = %dec_label_pc_10c0c
  %13 = mul i32 %6, 1048577, !insn.addr !100
  %14 = mul i32 %6, 4194304, !insn.addr !99
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %13, %16, !insn.addr !99
  %18 = icmp slt i32 %17, 0, !insn.addr !99
  %19 = icmp eq i32 %17, 0, !insn.addr !99
  store i1 %18, i1* %cpsr_n.01.reg2mem, !insn.addr !101
  br i1 %19, label %20, label %dec_label_pc_10c24, !insn.addr !101

; <label>:20:                                     ; preds = %12
  %21 = call i32 @unknown_240(), !insn.addr !101
  ret i32 %21, !insn.addr !101

dec_label_pc_10c24:                               ; preds = %dec_label_pc_10c0c, %12
  %cpsr_n.01.reload = load i1, i1* %cpsr_n.01.reg2mem
  %22 = icmp eq i1 %cpsr_n.01.reload, %3, !insn.addr !102
  br i1 %22, label %24, label %23, !insn.addr !102

; <label>:23:                                     ; preds = %dec_label_pc_10c24
  call void @__asm_svclt(i32 18288), !insn.addr !102
  br label %24, !insn.addr !102

; <label>:24:                                     ; preds = %dec_label_pc_10c24, %23
  %25 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !103
  ret i32 %arg1, !insn.addr !103

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %3, { 2, 1, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %24, { 1, 0 }
  uselistorder label %dec_label_pc_10c24, { 1, 0 }
}

define i32 @function_10c30(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10c30:
  %r0.0.reg2mem = alloca i32, !insn.addr !104
  %0 = mul i32 %arg4, 262144, !insn.addr !104
  %1 = or i32 %0, 131072, !insn.addr !105
  %2 = inttoptr i32 %1 to i8*, !insn.addr !106
  %3 = load i8, i8* %2, align 131072, !insn.addr !106
  %4 = icmp eq i8 %3, 0, !insn.addr !107
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !107
  br i1 %4, label %dec_label_pc_10c3a, label %dec_label_pc_10c42, !insn.addr !107

dec_label_pc_10c3a:                               ; preds = %dec_label_pc_10c30
  %5 = call i32 @function_10bdc(i32 %arg1, i32 %arg2, i32 %arg3, i8 0), !insn.addr !108
  store i8 1, i8* %2, align 131072, !insn.addr !109
  store i32 %5, i32* %r0.0.reg2mem, !insn.addr !109
  br label %dec_label_pc_10c42, !insn.addr !109

dec_label_pc_10c42:                               ; preds = %dec_label_pc_10c30, %dec_label_pc_10c3a
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !110

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10c42, { 1, 0 }
}

define i32 @function_10c44() local_unnamed_addr {
dec_label_pc_10c44:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !111
}

define i32 @function_10c48(i8* %arg1) local_unnamed_addr {
dec_label_pc_10c48:
  %.lcssa.reg2mem = alloca i32, !insn.addr !112
  %r2.01.reg2mem = alloca i32, !insn.addr !112
  %.reg2mem = alloca i32, !insn.addr !112
  %0 = ptrtoint i8* %arg1 to i32
  %1 = call i32 @strlen(i8* %arg1), !insn.addr !113
  %2 = add i32 %0, -1
  %3 = add i32 %0, -2, !insn.addr !114
  %4 = add i32 %3, %1, !insn.addr !115
  %5 = icmp eq i32 %2, %4, !insn.addr !116
  store i32 -48, i32* %.reg2mem, !insn.addr !117
  store i32 %2, i32* %r2.01.reg2mem, !insn.addr !117
  store i32 -48, i32* %.lcssa.reg2mem, !insn.addr !117
  br i1 %5, label %dec_label_pc_10c88, label %dec_label_pc_10c70, !insn.addr !117

dec_label_pc_10c70:                               ; preds = %dec_label_pc_10c48, %dec_label_pc_10c70
  %r2.01.reload = load i32, i32* %r2.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %6 = add i32 %r2.01.reload, 1, !insn.addr !118
  %7 = inttoptr i32 %6 to i8*, !insn.addr !118
  %8 = load i8, i8* %7, align 1, !insn.addr !118
  %9 = zext i8 %8 to i32, !insn.addr !118
  %10 = add i32 %.reload, %9, !insn.addr !119
  %11 = mul i32 %10, 10, !insn.addr !120
  %12 = icmp eq i32 %6, %4, !insn.addr !116
  %13 = add i32 %11, -48, !insn.addr !121
  store i32 %13, i32* %.reg2mem, !insn.addr !117
  store i32 %6, i32* %r2.01.reg2mem, !insn.addr !117
  store i32 %13, i32* %.lcssa.reg2mem, !insn.addr !117
  br i1 %12, label %dec_label_pc_10c88, label %dec_label_pc_10c70, !insn.addr !117

dec_label_pc_10c88:                               ; preds = %dec_label_pc_10c70, %dec_label_pc_10c48
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %14 = add i32 %1, %2, !insn.addr !122
  %15 = inttoptr i32 %14 to i8*, !insn.addr !122
  %16 = load i8, i8* %15, align 1, !insn.addr !122
  %17 = zext i8 %16 to i32, !insn.addr !122
  %18 = add i32 %.lcssa.reload, %17, !insn.addr !123
  ret i32 %18, !insn.addr !124

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %2, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 -48, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10c70, { 1, 0 }
}

define i32 @function_10c94(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c94:
  %r5.3.reg2mem = alloca i32, !insn.addr !125
  %r4.3.reg2mem = alloca i32, !insn.addr !125
  %r5.2.reg2mem = alloca i32, !insn.addr !125
  %r4.2.reg2mem = alloca i32, !insn.addr !125
  %r5.1.reg2mem = alloca i32, !insn.addr !125
  %r4.1.reg2mem = alloca i32, !insn.addr !125
  %r5.0.reg2mem = alloca i32, !insn.addr !125
  %r4.0.reg2mem = alloca i32, !insn.addr !125
  %r2.0.reg2mem = alloca i32, !insn.addr !125
  %stack_var_-1015 = alloca i32, align 4
  %stack_var_-1016 = alloca i8, align 1
  %stack_var_-1040 = alloca i8*, align 4
  %stack_var_-2064 = alloca i32, align 4
  %stack_var_-2060 = alloca i32, align 4
  %stack_var_-2080 = alloca i32, align 4
  %0 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_1143c, i32 0, i32 0)), !insn.addr !126
  store i32 0, i32* %stack_var_-2064, align 4, !insn.addr !127
  %1 = call i32* @memset(i32* nonnull %stack_var_-2060, i32 0, i32 1020), !insn.addr !128
  %2 = ptrtoint i32* %1 to i32, !insn.addr !128
  %3 = call i32 @read(i32 %2, i32* nonnull %stack_var_-2064, i32 1024), !insn.addr !129
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_1144c, i32 0, i32 0), i32* nonnull %stack_var_-2064), !insn.addr !130
  %5 = bitcast i32* %stack_var_-2064 to i8*, !insn.addr !131
  %6 = bitcast i8** %stack_var_-1040 to %stat64*, !insn.addr !131
  %7 = call i32 @__xstat64(i32 3, i8* nonnull %5, %stat64* nonnull %6), !insn.addr !131
  %8 = icmp eq i32 %7, 0, !insn.addr !132
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !133
  store i32 %arg1, i32* %r5.2.reg2mem, !insn.addr !133
  br i1 %8, label %dec_label_pc_10d00, label %dec_label_pc_10e38, !insn.addr !133

dec_label_pc_10d00:                               ; preds = %dec_label_pc_10c94
  %9 = load i32, i32* %stack_var_-2064, align 4, !insn.addr !134
  %10 = urem i32 %9, 256, !insn.addr !134
  %11 = icmp eq i32 %10, 0, !insn.addr !135
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !136
  br i1 %11, label %dec_label_pc_10d64, label %dec_label_pc_10d0c, !insn.addr !136

dec_label_pc_10d0c:                               ; preds = %dec_label_pc_10d00
  %12 = call i16** @__ctype_b_loc(), !insn.addr !137
  %13 = ptrtoint i32* %stack_var_-2064 to i32, !insn.addr !138
  %14 = load i16*, i16** %12, align 4, !insn.addr !139
  %15 = ptrtoint i16* %14 to i32, !insn.addr !139
  store i32 %13, i32* %r2.0.reg2mem, !insn.addr !139
  store i32 %10, i32* %r4.0.reg2mem, !insn.addr !139
  br label %dec_label_pc_10d18, !insn.addr !139

dec_label_pc_10d18:                               ; preds = %dec_label_pc_10d58, %dec_label_pc_10d0c
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %16 = mul i32 %r4.0.reload, 2, !insn.addr !140
  %17 = add i32 %16, %15, !insn.addr !141
  %18 = inttoptr i32 %17 to i16*, !insn.addr !141
  %19 = load i16, i16* %18, align 2, !insn.addr !141
  %20 = and i16 %19, 8
  %21 = zext i16 %20 to i32, !insn.addr !142
  %22 = icmp ne i16 %20, 0, !insn.addr !142
  %23 = icmp eq i32 %r4.0.reload, 95, !insn.addr !143
  %or.cond = or i1 %23, %22
  br i1 %or.cond, label %dec_label_pc_10d58, label %dec_label_pc_10d30, !insn.addr !144

dec_label_pc_10d30:                               ; preds = %dec_label_pc_10d18
  %24 = add nsw i32 %r4.0.reload, -45, !insn.addr !145
  %25 = icmp ult i32 %24, 2, !insn.addr !146
  %26 = icmp ne i1 %25, true, !insn.addr !146
  %27 = icmp eq i32 %24, 2, !insn.addr !146
  %28 = icmp ne i1 %26, true, !insn.addr !147
  %29 = or i1 %27, %28, !insn.addr !147
  br i1 %29, label %dec_label_pc_10d58, label %dec_label_pc_10d3c, !insn.addr !147

dec_label_pc_10d3c:                               ; preds = %dec_label_pc_10d30
  %30 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11474, i32 0, i32 0)), !insn.addr !148
  %31 = call i32 @close(i32 %2), !insn.addr !149
  %32 = inttoptr i32 %21 to i32*, !insn.addr !150
  call void @pthread_exit(i32* %32), !insn.addr !150
  br label %dec_label_pc_10d58, !insn.addr !150

dec_label_pc_10d58:                               ; preds = %dec_label_pc_10d18, %dec_label_pc_10d3c, %dec_label_pc_10d30
  %33 = add i32 %r2.0.reload, 1, !insn.addr !151
  %34 = inttoptr i32 %33 to i8*, !insn.addr !151
  %35 = load i8, i8* %34, align 1, !insn.addr !151
  %36 = zext i8 %35 to i32, !insn.addr !151
  %37 = icmp eq i8 %35, 0, !insn.addr !152
  store i32 %33, i32* %r2.0.reg2mem, !insn.addr !153
  store i32 %36, i32* %r4.0.reg2mem, !insn.addr !153
  store i32 %21, i32* %r5.0.reg2mem, !insn.addr !153
  br i1 %37, label %dec_label_pc_10d64, label %dec_label_pc_10d18, !insn.addr !153

dec_label_pc_10d64:                               ; preds = %dec_label_pc_10d58, %dec_label_pc_10d00
  store i8* inttoptr (i32 1920169263 to i8*), i8** %stack_var_-1040, align 4, !insn.addr !154
  store i8 0, i8* %stack_var_-1016, align 1, !insn.addr !155
  %38 = call i32* @memset(i32* nonnull %stack_var_-1015, i32 0, i32 999), !insn.addr !156
  %39 = call i8* @strcpy(i8* nonnull %stack_var_-1016, i8* nonnull %5), !insn.addr !157
  store i32 1701670723, i32* %stack_var_-2080, align 4, !insn.addr !158
  %40 = bitcast i8** %stack_var_-1040 to i8*, !insn.addr !159
  %41 = call i32 @system(i8* nonnull %40), !insn.addr !159
  %42 = icmp eq i32 %41, -1, !insn.addr !160
  br i1 %42, label %dec_label_pc_10e80, label %dec_label_pc_10dd4, !insn.addr !161

dec_label_pc_10dd4:                               ; preds = %dec_label_pc_10d64
  %43 = call i32 @__asm_ubfx(i32 %41, i32 8, i32 8), !insn.addr !162
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_1149c, i32 0, i32 0)), !insn.addr !163
  %45 = urem i32 %41, 128, !insn.addr !164
  %46 = icmp eq i32 %45, 0, !insn.addr !164
  store i32 %41, i32* %r4.3.reg2mem, !insn.addr !165
  store i32 %43, i32* %r5.3.reg2mem, !insn.addr !165
  br i1 %46, label %dec_label_pc_10df0, label %dec_label_pc_10e58, !insn.addr !165

dec_label_pc_10df0:                               ; preds = %dec_label_pc_10dd4
  %47 = icmp eq i32 %43, 0, !insn.addr !166
  br i1 %47, label %dec_label_pc_10df8, label %dec_label_pc_10e9c, !insn.addr !167

dec_label_pc_10df8:                               ; preds = %dec_label_pc_10df0
  %48 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_114b4, i32 0, i32 0)), !insn.addr !168
  store i32 3158066, i32* %stack_var_-2080, align 4, !insn.addr !169
  store i32 %41, i32* %r4.1.reg2mem, !insn.addr !169
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !169
  br label %dec_label_pc_10e10, !insn.addr !169

dec_label_pc_10e10:                               ; preds = %dec_label_pc_10e9c, %dec_label_pc_10e80, %dec_label_pc_10e58, %dec_label_pc_10df8
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %49 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !170
  %50 = call i32 @strlen(i8* nonnull %49), !insn.addr !170
  %51 = add i32 %50, 1, !insn.addr !171
  %52 = call i32 @write(i32 %2, i32* nonnull %stack_var_-2080, i32 %51), !insn.addr !172
  %53 = call i32 @close(i32 %2), !insn.addr !173
  call void @pthread_exit(i32* null), !insn.addr !174
  store i32 %r4.1.reload, i32* %r4.2.reg2mem, !insn.addr !174
  store i32 %r5.1.reload, i32* %r5.2.reg2mem, !insn.addr !174
  br label %dec_label_pc_10e38, !insn.addr !174

dec_label_pc_10e38:                               ; preds = %dec_label_pc_10c94, %dec_label_pc_10e10
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_11458, i32 0, i32 0), i32* nonnull %stack_var_-2064), !insn.addr !175
  %55 = call i32 @close(i32 %2), !insn.addr !176
  %56 = inttoptr i32 %r4.2.reload to i32*, !insn.addr !177
  call void @pthread_exit(i32* %56), !insn.addr !177
  store i32 %r4.2.reload, i32* %r4.3.reg2mem, !insn.addr !177
  store i32 %r5.2.reload, i32* %r5.3.reg2mem, !insn.addr !177
  br label %dec_label_pc_10e58, !insn.addr !177

dec_label_pc_10e58:                               ; preds = %dec_label_pc_10dd4, %dec_label_pc_10e38
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_114f4, i32 0, i32 0), i32 %r5.3.reload), !insn.addr !178
  %58 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !179
  %59 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %58, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_1150c, i32 0, i32 0), i32 %r5.3.reload), !insn.addr !179
  store i32 %r4.3.reload, i32* %r4.1.reg2mem, !insn.addr !180
  store i32 %r5.3.reload, i32* %r5.1.reg2mem, !insn.addr !180
  br label %dec_label_pc_10e10, !insn.addr !180

dec_label_pc_10e80:                               ; preds = %dec_label_pc_10d64
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %60 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_1148c, i32 0, i32 0)), !insn.addr !181
  store i32 3158069, i32* %stack_var_-2080, align 4, !insn.addr !182
  store i32 -1, i32* %r4.1.reg2mem, !insn.addr !183
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !183
  br label %dec_label_pc_10e10, !insn.addr !183

dec_label_pc_10e9c:                               ; preds = %dec_label_pc_10df0
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_114d0, i32 0, i32 0), i32 %43), !insn.addr !184
  %62 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !185
  %63 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %62, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_114f0, i32 0, i32 0), i32 %43), !insn.addr !185
  store i32 %41, i32* %r4.1.reg2mem, !insn.addr !186
  store i32 %43, i32* %r5.1.reg2mem, !insn.addr !186
  br label %dec_label_pc_10e10, !insn.addr !186

; uselistorder directives
  uselistorder i32 %r5.3.reload, { 2, 0, 1 }
  uselistorder i32 %43, { 1, 3, 4, 2, 0 }
  uselistorder i32 %41, { 1, 2, 0, 3, 4, 5 }
  uselistorder i32 %2, { 1, 3, 2, 0, 4 }
  uselistorder i32* %stack_var_-2080, { 0, 4, 1, 2, 3, 5, 6 }
  uselistorder i32* %stack_var_-2064, { 0, 4, 5, 2, 1, 3, 6 }
  uselistorder i8** %stack_var_-1040, { 2, 0, 1 }
  uselistorder i8* %stack_var_-1016, { 1, 0 }
  uselistorder i32* %r2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 1, 4, 3, 0, 2 }
  uselistorder i32* %r5.1.reg2mem, { 1, 4, 3, 0, 2 }
  uselistorder i32* %r4.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r4.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.3.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 1, 0, 2 }
  uselistorder void (i32*)* @pthread_exit, { 2, 1, 0, 3 }
  uselistorder i32 (i32)* @close, { 2, 1, 0, 3 }
  uselistorder i32 (i8*, ...)* @printf, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*)* @puts, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10e58, { 1, 0 }
  uselistorder label %dec_label_pc_10e38, { 1, 0 }
  uselistorder label %dec_label_pc_10d58, { 1, 2, 0 }
}

define i32 @function_10ec4(i32 %arg1) local_unnamed_addr {
dec_label_pc_10ec4:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !187
  %stack_var_-1040 = alloca i32, align 4
  %stack_var_-1036 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-1056 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %3 = icmp eq i32 %arg1, 0, !insn.addr !188
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !189
  br i1 %3, label %dec_label_pc_10fa8, label %dec_label_pc_10ed4, !insn.addr !189

dec_label_pc_10ed4:                               ; preds = %dec_label_pc_10ec4
  %4 = call double @__asm_vmov.i32(i32 0), !insn.addr !190
  call void @__asm_vst1.8(double %4, i32 %2), !insn.addr !191
  store i32 2, i32* %stack_var_-1056, align 4, !insn.addr !192
  call void @__asm_vst1.8(double %4, i32 %1), !insn.addr !193
  %5 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11520, i32 0, i32 0)), !insn.addr !194
  %6 = call i32 @function_10c48(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1152c, i32 0, i32 0)), !insn.addr !195
  %7 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !196
  %8 = icmp slt i32 %7, 0, !insn.addr !197
  br i1 %8, label %dec_label_pc_10fb8, label %dec_label_pc_10f28, !insn.addr !198

dec_label_pc_10f28:                               ; preds = %dec_label_pc_10ed4
  %9 = bitcast i32* %stack_var_-1056 to %sockaddr*, !insn.addr !199
  %10 = call i32 @connect(i32 %7, %sockaddr* nonnull %9, i32 16), !insn.addr !199
  %11 = icmp slt i32 %10, 0, !insn.addr !200
  br i1 %11, label %dec_label_pc_10fcc, label %dec_label_pc_10f3c, !insn.addr !201

dec_label_pc_10f3c:                               ; preds = %dec_label_pc_10f28
  %12 = inttoptr i32 %arg1 to i8*, !insn.addr !202
  %13 = call i32 @strlen(i8* %12), !insn.addr !202
  %14 = add i32 %13, 1, !insn.addr !203
  %15 = inttoptr i32 %arg1 to i32*, !insn.addr !204
  %16 = call i32 @send(i32 %7, i32* %15, i32 %14, i32 0), !insn.addr !204
  store i32 0, i32* %stack_var_-1040, align 4, !insn.addr !205
  %17 = call i32* @memset(i32* nonnull %stack_var_-1036, i32 0, i32 1020), !insn.addr !206
  %18 = call i32 @recv(i32 %7, i32* nonnull %stack_var_-1040, i32 1024, i32 0), !insn.addr !207
  %19 = icmp slt i32 %18, 1, !insn.addr !208
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !208
  br i1 %19, label %dec_label_pc_10fa8, label %dec_label_pc_10f8c, !insn.addr !208

dec_label_pc_10f8c:                               ; preds = %dec_label_pc_10f3c
  %20 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !209
  %21 = add i32 %20, -1024, !insn.addr !210
  %22 = add i32 %21, %18, !insn.addr !211
  %23 = inttoptr i32 %22 to i8*, !insn.addr !211
  store i8 0, i8* %23, align 1, !insn.addr !211
  %24 = bitcast i32* %stack_var_-1040 to i8*, !insn.addr !212
  %25 = call i32 @function_10c48(i8* nonnull %24), !insn.addr !212
  %26 = icmp eq i32 %25, 200, !insn.addr !213
  %spec.select = select i1 %26, i32 0, i32 %25
  ret i32 %spec.select

dec_label_pc_10fa8:                               ; preds = %dec_label_pc_10ec4, %dec_label_pc_10f3c, %dec_label_pc_10fcc, %dec_label_pc_10fb8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !214

dec_label_pc_10fb8:                               ; preds = %dec_label_pc_10ed4
  call void @perror(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11534, i32 0, i32 0)), !insn.addr !215
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !216
  br label %dec_label_pc_10fa8, !insn.addr !216

dec_label_pc_10fcc:                               ; preds = %dec_label_pc_10f28
  call void @perror(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11540, i32 0, i32 0)), !insn.addr !217
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !218
  br label %dec_label_pc_10fa8, !insn.addr !218

; uselistorder directives
  uselistorder i32 %7, { 1, 0, 2, 3 }
  uselistorder double %4, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 -1, { 0, 1, 3, 4, 2, 5, 6, 7, 8, 9, 10 }
  uselistorder void (i8*)* @perror, { 1, 0, 2 }
  uselistorder i8 0, { 1, 3, 2, 0, 4, 5 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 0, 2, 1, 3 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, i32)* @socket, { 1, 0, 2 }
  uselistorder i32 (i8*)* @function_10c48, { 2, 1, 0 }
  uselistorder i32 (i8*)* @inet_addr, { 1, 0, 2 }
  uselistorder i32 -3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10fa8, { 2, 3, 1, 0 }
}

define i32 @function_10fe0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10fe0:
  %0 = call i32 @function_107a0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !219
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139018, i32 ptrtoint (i32* @global_var_21f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !220

; uselistorder directives
  uselistorder i32 0, { 9, 12, 13, 10, 11, 4, 58, 59, 61, 60, 72, 73, 62, 74, 75, 16, 17, 18, 19, 14, 15, 20, 21, 22, 23, 24, 25, 1, 26, 27, 67, 68, 28, 29, 63, 30, 31, 69, 0, 66, 32, 33, 64, 65, 34, 35, 70, 71, 3, 77, 38, 39, 40, 41, 42, 43, 44, 45, 36, 37, 2, 46, 47, 5, 6, 7, 8, 48, 49, 50, 51, 52, 53, 76, 54, 55, 56, 57 }
  uselistorder i32 2, { 1, 3, 2, 5, 6, 0, 4 }
}

define i32 @function_1101c() local_unnamed_addr {
dec_label_pc_1101c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !221

; uselistorder directives
  uselistorder i32 1, { 5, 25, 53, 28, 40, 39, 38, 37, 8, 4, 51, 52, 44, 43, 42, 27, 26, 41, 17, 16, 15, 14, 13, 12, 11, 10, 9, 54, 20, 19, 18, 3, 21, 24, 22, 7, 6, 2, 1, 45, 29, 30, 31, 32, 33, 34, 35, 36, 50, 49, 48, 47, 46, 23, 0 }
}

define i32 @function_11020(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11020:
  ret i32 %arg1, !insn.addr !222
}

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @accept(i32, %sockaddr*, i32*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @pthread_create(i32*, i32*, i32* (i32*)*, i32*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @system(i8*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i16** @__ctype_b_loc() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare void @pthread_exit(i32*) local_unnamed_addr

declare i32 @shutdown(i32, i32) local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @inet_addr(i8*) local_unnamed_addr

declare i32 @__xstat64(i32, i8*, %stat64*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare void @__assert_fail(i8*, i8*, i32, i8*) local_unnamed_addr

declare double @__asm_vmov.i32(i32) local_unnamed_addr

declare void @__asm_vst1.8(double, i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i32) local_unnamed_addr

!0 = !{i64 67492}
!1 = !{i64 67496}
!2 = !{i64 67528}
!3 = !{i64 67540}
!4 = !{i64 67552}
!5 = !{i64 67564}
!6 = !{i64 67576}
!7 = !{i64 67588}
!8 = !{i64 67600}
!9 = !{i64 67612}
!10 = !{i64 67624}
!11 = !{i64 67636}
!12 = !{i64 67648}
!13 = !{i64 67660}
!14 = !{i64 67672}
!15 = !{i64 67684}
!16 = !{i64 67696}
!17 = !{i64 67708}
!18 = !{i64 67720}
!19 = !{i64 67732}
!20 = !{i64 67744}
!21 = !{i64 67756}
!22 = !{i64 67768}
!23 = !{i64 67780}
!24 = !{i64 67792}
!25 = !{i64 67804}
!26 = !{i64 67816}
!27 = !{i64 67828}
!28 = !{i64 67840}
!29 = !{i64 67852}
!30 = !{i64 67864}
!31 = !{i64 67876}
!32 = !{i64 67888}
!33 = !{i64 67892}
!34 = !{i64 67920}
!35 = !{i64 67924}
!36 = !{i64 67928}
!37 = !{i64 67944}
!38 = !{i64 67948}
!39 = !{i64 67952}
!40 = !{i64 67968}
!41 = !{i64 67972}
!42 = !{i64 67980}
!43 = !{i64 67984}
!44 = !{i64 67996}
!45 = !{i64 68008}
!46 = !{i64 68016}
!47 = !{i64 68020}
!48 = !{i64 68036}
!49 = !{i64 68056}
!50 = !{i64 68076}
!51 = !{i64 68080}
!52 = !{i64 68084}
!53 = !{i64 68096}
!54 = !{i64 68100}
!55 = !{i64 68104}
!56 = !{i64 68144}
!57 = !{i64 68164}
!58 = !{i64 68168}
!59 = !{i64 68172}
!60 = !{i64 68176}
!61 = !{i64 68180}
!62 = !{i64 68188}
!63 = !{i64 68208}
!64 = !{i64 68212}
!65 = !{i64 68216}
!66 = !{i64 68220}
!67 = !{i64 68240}
!68 = !{i64 68252}
!69 = !{i64 68256}
!70 = !{i64 68260}
!71 = !{i64 68272}
!72 = !{i64 68276}
!73 = !{i64 68284}
!74 = !{i64 68288}
!75 = !{i64 68292}
!76 = !{i64 68296}
!77 = !{i64 68304}
!78 = !{i64 68320}
!79 = !{i64 68324}
!80 = !{i64 68336}
!81 = !{i64 68344}
!82 = !{i64 68372}
!83 = !{i64 68400}
!84 = !{i64 68420}
!85 = !{i64 68432}
!86 = !{i64 68440}
!87 = !{i64 68460}
!88 = !{i64 68472}
!89 = !{i64 68480}
!90 = !{i64 68516}
!91 = !{i64 68520}
!92 = !{i64 68526}
!93 = !{i64 68548}
!94 = !{i64 68552}
!95 = !{i64 68556}
!96 = !{i64 68560}
!97 = !{i64 68572}
!98 = !{i64 68604}
!99 = !{i64 68628}
!100 = !{i64 68624}
!101 = !{i64 68636}
!102 = !{i64 68648}
!103 = !{i64 68652}
!104 = !{i64 68656}
!105 = !{i64 68658}
!106 = !{i64 68662}
!107 = !{i64 68664}
!108 = !{i64 68666}
!109 = !{i64 68672}
!110 = !{i64 68674}
!111 = !{i64 68676}
!112 = !{i64 68680}
!113 = !{i64 68688}
!114 = !{i64 68692}
!115 = !{i64 68712}
!116 = !{i64 68732}
!117 = !{i64 68740}
!118 = !{i64 68720}
!119 = !{i64 68724}
!120 = !{i64 68728}
!121 = !{i64 68736}
!122 = !{i64 68744}
!123 = !{i64 68748}
!124 = !{i64 68752}
!125 = !{i64 68756}
!126 = !{i64 68780}
!127 = !{i64 68796}
!128 = !{i64 68800}
!129 = !{i64 68820}
!130 = !{i64 68836}
!131 = !{i64 68852}
!132 = !{i64 68856}
!133 = !{i64 68860}
!134 = !{i64 68864}
!135 = !{i64 68868}
!136 = !{i64 68872}
!137 = !{i64 68876}
!138 = !{i64 68880}
!139 = !{i64 68884}
!140 = !{i64 68888}
!141 = !{i64 68892}
!142 = !{i64 68896}
!143 = !{i64 68904}
!144 = !{i64 68900}
!145 = !{i64 68912}
!146 = !{i64 68916}
!147 = !{i64 68920}
!148 = !{i64 68932}
!149 = !{i64 68940}
!150 = !{i64 68948}
!151 = !{i64 68952}
!152 = !{i64 68956}
!153 = !{i64 68960}
!154 = !{i64 68980}
!155 = !{i64 68996}
!156 = !{i64 69012}
!157 = !{i64 69028}
!158 = !{i64 69048}
!159 = !{i64 69060}
!160 = !{i64 69064}
!161 = !{i64 69072}
!162 = !{i64 69088}
!163 = !{i64 69092}
!164 = !{i64 69096}
!165 = !{i64 69100}
!166 = !{i64 69104}
!167 = !{i64 69108}
!168 = !{i64 69120}
!169 = !{i64 69132}
!170 = !{i64 69140}
!171 = !{i64 69148}
!172 = !{i64 69156}
!173 = !{i64 69164}
!174 = !{i64 69172}
!175 = !{i64 69188}
!176 = !{i64 69196}
!177 = !{i64 69204}
!178 = !{i64 69220}
!179 = !{i64 69240}
!180 = !{i64 69244}
!181 = !{i64 69256}
!182 = !{i64 69268}
!183 = !{i64 69272}
!184 = !{i64 69288}
!185 = !{i64 69308}
!186 = !{i64 69312}
!187 = !{i64 69316}
!188 = !{i64 69320}
!189 = !{i64 69328}
!190 = !{i64 69332}
!191 = !{i64 69356}
!192 = !{i64 69360}
!193 = !{i64 69364}
!194 = !{i64 69368}
!195 = !{i64 69384}
!196 = !{i64 69404}
!197 = !{i64 69408}
!198 = !{i64 69412}
!199 = !{i64 69424}
!200 = !{i64 69428}
!201 = !{i64 69432}
!202 = !{i64 69444}
!203 = !{i64 69456}
!204 = !{i64 69464}
!205 = !{i64 69480}
!206 = !{i64 69484}
!207 = !{i64 69504}
!208 = !{i64 69512}
!209 = !{i64 69516}
!210 = !{i64 69520}
!211 = !{i64 69528}
!212 = !{i64 69532}
!213 = !{i64 69536}
!214 = !{i64 69548}
!215 = !{i64 69568}
!216 = !{i64 69576}
!217 = !{i64 69588}
!218 = !{i64 69596}
!219 = !{i64 69616}
!220 = !{i64 69648}
!221 = !{i64 69660}
!222 = !{i64 69668}
