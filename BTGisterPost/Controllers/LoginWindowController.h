//
//  LoginWindowController.h
//  BTGisterPost
//
//  Copyright (c) 2013 Thomas Blitz
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//


#import <Cocoa/Cocoa.h>
#import "LoginProtocol.h"

@interface LoginWindowController : NSWindowController <NSTextViewDelegate>

@property (strong) IBOutlet NSWindow *loginWindow;

@property (strong) IBOutlet NSTextField *usernameTextField;

@property (strong) IBOutlet NSTextField *passwordTextField;

@property (nonatomic, strong) id<LoginProtocol> delegate;


- (IBAction)selector:(id)sender;

- (IBAction)loginButtonPushed:(id)sender;
- (IBAction)cancelButtonPushed:(id)sender;

- (void)showModalLoginViewInWindow:(NSWindow *)window;

- (void)closeModalWindow: (id)sender;

- (id)initWithDelegate:(id<LoginProtocol>)delegate;

@end
