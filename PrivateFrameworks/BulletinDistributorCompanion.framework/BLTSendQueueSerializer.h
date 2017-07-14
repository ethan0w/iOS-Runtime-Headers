/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSendQueueSerializer : NSObject {
    NSURL * _sendFileURL;
    BOOL  _usesMessageIdentifiers;
}

@property (nonatomic, copy) NSURL *sendFileURL;
@property (nonatomic, readonly) BOOL usesMessageIdentifiers;

- (void).cxx_destruct;
- (void)add:(id)arg1 type:(unsigned short)arg2;
- (void)add:(id)arg1 type:(unsigned short)arg2 messageIdentifier:(id*)arg3;
- (void)cleanup;
- (void)handleFileURL:(id)arg1 protobufHandler:(id)arg2;
- (id)initWithUsesMessageIdentifiers:(BOOL)arg1;
- (id)sendFileURL;
- (void)sendWithSender:(id)arg1 timeout:(id)arg2 responseHandlers:(id)arg3 didSend:(id /* block */)arg4 didQueue:(id /* block */)arg5;
- (void)setSendFileURL:(id)arg1;
- (BOOL)usesMessageIdentifiers;

@end
