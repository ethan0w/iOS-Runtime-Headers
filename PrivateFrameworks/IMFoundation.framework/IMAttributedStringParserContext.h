/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSString, NSAttributedString;

@interface IMAttributedStringParserContext : NSObject  {
    NSAttributedString *_inString;
}

@property(readonly) NSAttributedString * inString;
@property(readonly) NSString * name;
@property(readonly) NSArray * resultsForLogging;
@property(readonly) BOOL shouldPreprocess;


- (id)name;
- (void)dealloc;
- (void)parserDidEnd:(id)arg1;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)shouldPreprocess;
- (void)parserDidStart:(id)arg1;
- (id)inString;
- (id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)resultsForLogging;
- (id)initWithAttributedString:(id)arg1;

@end
