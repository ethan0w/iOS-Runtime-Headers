/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages> {
    ASClientAccount *_account;
}

+ (struct __CFRunLoop { }*)_actorRunLoop;
+ (void)_runActorThreadWithStartupLock:(id)arg1;

- (void)dealloc;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 consumer:(id)arg9 context:(void*)arg10;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (id)encryptionIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (id)signingIdentityPersistentReference;
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
- (oneway void)cancelSearchQuery:(id)arg1;
- (oneway void)performSearchQuery:(id)arg1;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)monitorFoldersForUpdates:(id)arg1;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)arg1 withTag:(id*)arg2;
- (id)delegateeInvitationICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (oneway void)shutdown;
- (int)supportsEmailFlagging;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (oneway void)cancelTaskWithID:(int)arg1;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5;
- (int)mailNumberOfPastDaysToSync;
- (int)supportsMailboxSearch;
- (BOOL)isHotmailAccount;
- (void)performFolderChange:(id)arg1 isUserRequested:(BOOL)arg2;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (id)mailboxes;
- (oneway void)setAccount:(id)arg1;
- (oneway void)setCustomSignature:(id)arg1;
- (id)customSignature;
- (id)initWithDAAccount:(id)arg1;
- (oneway void)_accountPasswordChanged;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
- (oneway void)setGeneratesBulletins:(BOOL)arg1;
- (BOOL)generatesBulletins;
- (oneway void)startup;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_newASPolicyKeyNotification:(id)arg1;
- (oneway void)_folderUpdatedNotification:(id)arg1;
- (oneway void)_daemonDiedNotification:(id)arg1;
- (BOOL)searchQueriesRunning;
- (oneway void)cancelAllSearchQueries;
- (void)_sendFailureToConsumer:(id)arg1;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (void)_performAsynchronousSerialOnActorQueue:(id)arg1;
- (void)_performSynchronousSerialOnActorQueue:(id)arg1;
- (void)disable;

@end
