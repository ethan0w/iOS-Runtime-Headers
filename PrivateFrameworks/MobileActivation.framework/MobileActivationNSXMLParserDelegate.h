/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

@class NSMutableDictionary, NSMutableString;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate> {
    int _state;
    bool_renderHTML;
    NSMutableString *_currentPlist;
    NSMutableDictionary *_activationTicket;
}


- (void)dealloc;
- (id)init;
- (id)activationTicket:(id*)arg1;
- (void)appendOpeningTagForElementName:(id)arg1 andAttributes:(id)arg2;
- (void)appendClosingTagForElementName:(id)arg1;
- (id)flattenedDictString:(id)arg1;
- (id)activationTicket:(id*)arg1 andRenderHTML:(bool*)arg2;
- (id)stringForState:(int)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end
