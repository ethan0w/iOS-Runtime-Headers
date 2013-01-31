/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeContactsSearchControllerDelegate>, MFContactsSearchManager, NSNumber, MFContactsSearchResultsModel;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {
    <MFMailComposeContactsSearchControllerDelegate> *_delegate;
    MFContactsSearchManager *_manager;
    MFContactsSearchResultsModel *_model;
    NSNumber *_taskID;
    BOOL _foundAnySearchResults;
    unsigned int _waitingOnSearchResultsCount;
}

@property <MFMailComposeContactsSearchControllerDelegate> * delegate;
@property(retain) NSNumber * taskID;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (id)taskID;
- (void)_finishSearch;
- (void)setTaskID:(id)arg1;
- (void)_cancelSearchAndNotify:(BOOL)arg1;
- (void)searchWithString:(id)arg1;
- (void)cancelSearch;

@end
