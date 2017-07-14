/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMessagesSuggestionsService : SGSuggestionsService <SGSuggestionsServiceMessagesProtocol> {
    <SGMessagesSuggestionsServiceDelegate> * _delegate;
    SGMessagesDaemonConnection * _messagesDaemonConnection;
    NSMutableDictionary * _previousMessages;
}

@property <SGMessagesSuggestionsServiceDelegate> *delegate;
@property (retain) SGMessagesDaemonConnection *messagesDaemonConnection;
@property (retain) NSMutableDictionary *previousMessages;

- (void).cxx_destruct;
- (id)_remoteSuggestionManager;
- (id)delegate;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)harvestedSuggestionsFromMessage:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)messagesDaemonConnection;
- (id)previousMessages;
- (void)sendContextForMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManagerForTesting:(id)arg1;
- (void)setMessagesDaemonConnection:(id)arg1;
- (void)setPreviousMessages:(id)arg1;
- (void)setupContextIfNeededForConversation:(id)arg1;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;

@end
