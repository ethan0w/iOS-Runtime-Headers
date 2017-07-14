/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMessagesDaemonConnection : NSObject {
    NSMutableDictionary * _contextSent;
    <SGDSuggestManagerMessagesProtocol> * _remoteSuggestionManager;
}

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)dealloc;
- (void)didSendContextForConversation:(id)arg1;
- (BOOL)hasContextBeenSentForConversation:(id)arg1;
- (id)initWithDaemonConnection:(id)arg1;
- (id)remoteSuggestionManager;
- (void)setManagerForTesting:(id)arg1;

@end
