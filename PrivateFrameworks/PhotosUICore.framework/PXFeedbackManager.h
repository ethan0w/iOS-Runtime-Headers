/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackManager : NSObject {
    unsigned int  _feedbackCollectionType;
    PXFeedbackCollector * _feedbackCollector;
    PXFeedbackSender * _feedbackSender;
}

@property (nonatomic, readonly) PXFeedbackCollector *feedbackCollector;
@property (nonatomic, readonly) PXFeedbackSender *feedbackSender;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)feedbackCollector;
- (id)feedbackSender;
- (id)init;
- (void)provideUserFeedbackEntry:(id)arg1;
- (id)provideUserFeedbackFromDictionary:(id)arg1 forFeedbackType:(unsigned int)arg2;
- (void)removeFeedbackEntry:(id)arg1;

@end
