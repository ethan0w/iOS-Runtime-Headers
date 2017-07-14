/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportRemoveGroupsOperation : FCOperation {
    FCFeedDescriptor * _feedDescriptor;
    id /* block */  _groupRemovalTestBlock;
    id /* block */  _removeGroupsCompletionHandler;
    FCFeedViewport * _resultViewport;
    FCFeedViewport * _viewport;
    FCFeedViewportDiff * _viewportDiff;
}

@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, copy) id /* block */ groupRemovalTestBlock;
@property (nonatomic, copy) id /* block */ removeGroupsCompletionHandler;
@property (nonatomic, retain) FCFeedViewport *resultViewport;
@property (nonatomic, retain) FCFeedViewport *viewport;
@property (nonatomic, retain) FCFeedViewportDiff *viewportDiff;

- (void).cxx_destruct;
- (id)feedDescriptor;
- (id /* block */)groupRemovalTestBlock;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)removeGroupsCompletionHandler;
- (id)resultViewport;
- (void)setFeedDescriptor:(id)arg1;
- (void)setGroupRemovalTestBlock:(id /* block */)arg1;
- (void)setRemoveGroupsCompletionHandler:(id /* block */)arg1;
- (void)setResultViewport:(id)arg1;
- (void)setViewport:(id)arg1;
- (void)setViewportDiff:(id)arg1;
- (BOOL)validateOperation;
- (id)viewport;
- (id)viewportDiff;

@end
