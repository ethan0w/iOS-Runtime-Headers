/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSFileAccessNode, NSString, NSMapTable;

@interface NSFileAccessNode : NSObject  {
    NSFileAccessNode *_parent;
    NSString *_name;
    NSString *_normalizedName;
    NSFileAccessNode *_symbolicLinkDestination;
    unsigned int _symbolicLinkReferenceCount;
    NSMapTable *_childrenByNormalizedName;
    id _presenterOrPresenters;
    id _provider;
    id _accessClaimOrClaims;
    BOOL _isArbitrationBoundary;
    BOOL _isFilePackageIsFigured;
    BOOL _isFilePackage;
    NSString *_lastRequestedChildName;
    NSFileAccessNode *_lastRequestedChild;
    id _progressPublisherOrPublishers;
    id _progressSubscriberOrSubscribers;
}


- (id)description;
- (void)dealloc;
- (id)parent;
- (id)standardizedURL;
- (id)url;
- (void)assertDescendantsLive;
- (void)assertDead;
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(id)arg1;
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)removeProgressSubscriber:(id)arg1;
- (void)addProgressSubscriber:(id)arg1;
- (void)removeProgressPublisher:(id)arg1;
- (void)addProgressPublisher:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)addPresenter:(id)arg1;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(id)arg1;
- (void)assertLive;
- (void)forEachProgressSubscriberOfItemPerformProcedure:(id)arg1;
- (id)pathExceptPrivate;
- (void)forEachAccessClaimOnItemPerformProcedure:(id)arg1;
- (id)biggestFilePackageLocation;
- (void)forEachDescendantPerformProcedure:(id)arg1;
- (BOOL)isFilePackage;
- (id)childForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 ofPath:(id)arg2;
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;
- (void)removeChildForNormalizedName:(id)arg1;
- (void)removeSelfIfUseless;
- (void)removeAccessClaim:(id)arg1;
- (void)addAccessClaim:(id)arg1;
- (BOOL)itemIsSubarbitrable;
- (void)forEachRelevantAccessClaimPerformProcedure:(id)arg1;
- (id)descriptionWithIndenting:(id)arg1;
- (void)forEachPresenterOfContainedItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(id)arg1;
- (id)itemProvider;
- (BOOL)itemIsInItemAtLocation:(id)arg1;
- (BOOL)itemIsItemAtLocation:(id)arg1;
- (void)setArbitrationBoundary;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id)arg1;
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id)arg1;
- (id)pathFromAncestor:(id)arg1;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)setParent:(id)arg1 name:(id)arg2;
- (void)forEachProgressPublisherOfItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainingItemPerformProcedure:(id)arg1;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 create:(BOOL)arg3;
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)setSymbolicLinkDestination:(id)arg1;
- (id)descendantForFileURL:(id)arg1;
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;

@end
