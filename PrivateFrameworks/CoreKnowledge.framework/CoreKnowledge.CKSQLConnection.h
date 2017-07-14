/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKSQLConnection : NSObject {
    void _handle;
    void log;
    void name;
    void path;
    void queue;
    void queueContext.storage;
}

@property (nonatomic, readonly) int changes;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) void*handle;
@property (nonatomic, readonly) _TtC13CoreKnowledge8CKLogger *log;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) BOOL readonly;
@property (nonatomic, readonly) int totalChanges;

- (id /* block */).cxx_destruct;
- (int)changes;
- (void)closeConnection;
- (void)dealloc;
- (id)description;
- (BOOL)execute:(id)arg1 error:(id*)arg2;
- (void*)handle;
- (id)init;
- (id)init:(id)arg1 readonly:(BOOL)arg2 error:(id*)arg3;
- (id)initWithReadonlyFlag:(BOOL)arg1 error:(id*)arg2;
- (void)interrupt;
- (id)log;
- (id)name;
- (id)path;
- (BOOL)readonly;
- (int)totalChanges;

@end
