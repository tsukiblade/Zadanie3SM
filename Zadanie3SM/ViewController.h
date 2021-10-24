//
//  ViewController.h
//  Zadanie3SM
//
//  Created by Szymon Kozłowski on 25/10/2021.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIButton *informationButton;
@property (nonatomic, weak) IBOutlet UIImageView *imageView;

- (IBAction)buttonClicked;

@end

