/* Generated by RuntimeBrowser.
 */

@protocol _UIKeyboardArbitration

@required

- (void)applicationShouldFocusWithBundle:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)notifyHostedPIDsOfSuppression:(BOOL)arg1;
- (void)retrieveDebugInformation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)retrieveMoreDebugInformationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(NSString *)arg2 forKeyboard:(BOOL)arg3 withLevel:(float)arg4;
- (void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 6: _UIKeyboardChangedInformation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startArbitrationWithExpectedState:(void *)arg1 hostingPIDs:(void *)arg2 withSuppression:(void *)arg3 onConnected:(void *)arg4; // needs 4 arg types, found 9: _UIKeyboardChangedInformation *, NSArray *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIKeyboardChangedInformation *, void*
- (void)transition:(NSString *)arg1 eventStage:(unsigned int)arg2 withInfo:(NSDictionary *)arg3;

@end
