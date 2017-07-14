/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken * _changeToken;
    NSMutableArray * _deletedRecordIds;
    NSMutableDictionary * _recordsByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)completedWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 moreComing:(BOOL)arg3 error:(id)arg4;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;

@end
