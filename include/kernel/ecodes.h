enum ecodes {
	ERR_OK = 0,
	ERR_FAIL = -1,
	ERR_NO_TASKS = -16383,
	ERR_KCB_ALLOC,
	ERR_TCB_ALLOC,
	ERR_STACK_ALLOC,
	ERR_TASK_CANT_REMOVE,
	ERR_TASK_NOT_FOUND,
	ERR_TASK_CANT_SUSPEND,
	ERR_TASK_CANT_RESUME,
	ERR_TASK_INVALID_PRIO,
	ERR_STACK_CHECK,
	ERR_PIPE_ALLOC,
	ERR_PIPE_DEALLOC,
	ERR_SEM_ALLOC,
	ERR_SEM_DEALLOC,
	ERR_SEM_OPERATION,
	ERR_EQ_NOTEMPTY,
	ERR_MQ_NOTEMPTY,
	ERR_UNKNOWN
};

struct ecode_s {
	int32_t ecode;
	char * const desc;
};

extern struct ecode_s *perror;
