/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;

@interface CKModalTranscriptController : CKTranscriptController  {
    BOOL _mimeType;
    BOOL _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    BOOL _cameraSelectionDisabled;
}

@property BOOL mimeType;

+ (id)_newMediaObjectForFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;

- (void)dealloc;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)disableCameraAttachments;
- (BOOL)_insertMediaObject:(id)arg1;
- (void)setMimeType:(BOOL)arg1;
- (void)_addPart:(id)arg1;
- (BOOL)_shouldAllowCameraAttachments;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)insertTextPart:(id)arg1;
- (void)setCanEditRecipients:(BOOL)arg1;
- (BOOL)shouldDismissAfterSend;
- (BOOL)_shouldUseExistingConversations;
- (void)transitionFromNewMessageToConversation;
- (void)registerForNotifications;
- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;
- (BOOL)mimeType;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;

@end
