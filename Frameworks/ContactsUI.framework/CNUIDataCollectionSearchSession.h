/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIDataCollectionSearchSession : NSObject {
    BOOL  _pendingResults;
    BOOL  _pendingSuggestionsResults;
}

@property (nonatomic) BOOL pendingResults;
@property (nonatomic) BOOL pendingSuggestionsResults;

+ (void)begin;
+ (id)currentSession;
+ (void)end;

- (void)didFetchResultSuggested:(BOOL)arg1;
- (void)didSelectResult:(id)arg1;
- (BOOL)pendingResults;
- (BOOL)pendingSuggestionsResults;
- (void)searchStringDidChange;
- (void)setPendingResults:(BOOL)arg1;
- (void)setPendingSuggestionsResults:(BOOL)arg1;

@end
