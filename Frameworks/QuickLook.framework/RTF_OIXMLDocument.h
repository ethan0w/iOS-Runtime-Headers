/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, RTF_OIXMLElement;

@interface RTF_OIXMLDocument : RTF_OIXMLNode  {
    RTF_OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)contentString;
- (void)setRootElement:(id)arg1;
- (void)setCharacterEncoding:(id)arg1;
- (id)initWithRootElement:(id)arg1;
- (id)closingTagString;
- (id)XMLString;
- (id)openingTagString;
- (id)rootElement;
- (void)setVersion:(id)arg1;
- (id)copyMutableXMLString;

@end
